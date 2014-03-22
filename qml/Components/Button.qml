import QtQuick 2.2
import QtQuick.Layouts 1.1
import QMLBootstrap 1.0

Item {
    id: btn
    property string option: "default"
    property string size: "base"
    property string text: ""
    property bool round: true
    property alias faIcon: faText.faIcon
    property bool boldFont: false
    readonly property alias pressed: mouse.pressed

    signal clicked()
    signal doubleClicked()
    signal pressAndHold()

    width: implicitWidth; height: implicitHeight
    implicitWidth: (2 + BS.padding["%1-hrz".arg(btn.size)] * 2 + textRow.width)*dp
    implicitHeight: (2 + BS.padding["%1-vrt".arg(btn.size)] * 2 + textRow.height)*dp

    Rectangle {
        id: btnRect
        anchors.fill: parent
        color: mouse.containsMouse ? Qt.darker(BS.buttonColors["%1-bg".arg(btn.option)], 1.1)
                                   : BS.buttonColors["%1-bg".arg(btn.option)]

        opacity: btn.enabled ? 1 : 0.65
        border {
            color: mouse.containsMouse ? Qt.darker(BS.buttonColors["%1-border".arg(btn.option)], 1.1)
                                       : BS.buttonColors["%1-border".arg(btn.option)]
            width: 1*dp
        }
        radius: btn.round ? BS.borderRadius[btn.size] : 0

        Rectangle {
            id: rectShadow
            anchors.fill: parent
            visible: mouse.pressed && mouse.containsMouse
            gradient: Gradient {
                GradientStop { position: 0.0; color: Qt.rgba(0, 0, 0, 0.25) }
                GradientStop { position: 0.2; color: "transparent" }
                GradientStop { position: 1.0; color: "transparent" }
            }
        }

        RowLayout {
            id: textRow
            anchors.centerIn: parent
            width: faText.implicitWidth + spacing + btnText.implicitWidth
            height: btnText.implicitHeight
            spacing: faText.implicitWidth !== 0 ? 3*dp : 0
            FontAwesomeIcon {
                id: faText
                Layout.alignment: Qt.AlignVCenter
                size: btn.size
                boldFont: btn.boldFont
                color: BS.buttonColors["%1-text".arg(btn.option)]
            }
            Text {
                id: btnText
                text: btn.text
                font.pixelSize: BS.fontSize[btn.size]*dp
                font.bold: btn.boldFont
                color: BS.buttonColors["%1-text".arg(btn.option)]
            }
        }

        MouseArea {
            id: mouse
            anchors.fill: parent
            hoverEnabled: true
            onClicked: btn.clicked()
            onDoubleClicked: btn.doubleClicked()
            onPressAndHold: btn.pressAndHold()
        }
    }
}
