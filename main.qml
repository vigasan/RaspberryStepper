import QtQuick 2.12
import QtQuick.Window 2.12

Window
{
    id: rootPage
    visible: true
    width: 800
    height: 480
    color: "black"

    readonly property int stepMODE_FULL_STEP:   0
    readonly property int stepMODE_HALF_STEP:   1
    readonly property int stepMODE_uSTEP_4:     2
    readonly property int stepMODE_uSTEP_8:     3
    readonly property int stepMODE_uSTEP_16:    4
    readonly property int stepMODE_uSTEP_32:    5
    readonly property int stepMODE_uSTEP_64:    6
    readonly property int stepMODE_uSTEP_128:   7

    FontLoader
    {
        id: typeFont
        source:"qrc:/images/Helvetica.ttf"
    }

    FontLoader
    {
       id: typeFont_Bold
       source:"qrc:/images/HelveticaSemiBold.ttf"
    }

    signal reqControlPage()
    signal reqSetting1Page()
    signal reqSetting2Page()

    onReqControlPage:
    {
        controlPage.visible = true;
        setting1Page.visible = false;
        setting2Page.visible = false;
    }

    onReqSetting1Page:
    {
        controlPage.visible = false;
        setting1Page.visible = true;
        setting2Page.visible = false;
    }

    onReqSetting2Page:
    {
        controlPage.visible = false;
        setting1Page.visible = false;
        setting2Page.visible = true;
    }

    //////////////////////////////////////////////////////////////
    // Pages
    //////////////////////////////////////////////////////////////
    ControlPage
    {
       id: controlPage
       width: parent.width
       height: parent.height
       visible: true
    }

    Setting1Page
    {
        id: setting1Page
        width: parent.width
        height: parent.height
        visible: false
    }

    Setting2Page
    {
        id: setting2Page
        width: parent.width
        height: parent.height
        visible: false
    }
}
