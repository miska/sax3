#ifndef _UI_H_
#define _UI_H_

#define YUILogComponent "SaX3-UI-Lib-Log"
#include "YUILog.h"
#include "YUI.h"
#include "YWidgetFactory.h"
#include "YLayoutBox.h"
#include "YDialog.h"
#include "YEvent.h"
#include "YPushButton.h"
#include "YLabel.h"
#include "YWidget.h"


namespace UI{

  class HLayout;

  class Dialog{
    YDialog * dialog;
  public:
    Dialog();
    Dialog * createDialog();
    YDialog * getElement();
    void Event();
  };

  class VLayout{
    YLayoutBox * vbox;
  public:

    void createVLayout(Dialog *);
    void createVLayout(VLayout *);
    void createVLayout(HLayout *);
    YLayoutBox * getElement();

  };

  class HLayout{
    YLayoutBox * hbox;
  public:
    void createHLayout(Dialog *);
    void createHLayout(VLayout *);
    void createHLayout(HLayout *);



    YLayoutBox * getElement();
  };

  class Label{
    YLabel * label;
  public:
    void createLabel(VLayout * parent,string text);
    void createLabel(HLayout * parent,string text);
  };

  class PushButton{
    YPushButton * button;
  public:
    void createButton(VLayout * parent,string text);
    void createButton(HLayout * parent,string text);
  };

}

#endif