import QtQuick 2.2
import QtQuick.Layouts 1.1

/* Button - Bootstrap style button
 * \property string option
 *           Specify bootstrap option name.
 *           (ex. default, primary, success)
 * \property string faIcon
 *           Specify FontAwesome icon's name.
 * \property string size
 *           Specify bootstrap size name.
 *           (large, base, small, xsmall)
 *           note: width and height is settled by this property.
 * \property bool boldFont
 * \property bool enabled
 *           When it is true, button becomes unclickable.
 * \property bool round
 *           Whether button should have rounded corner.
 * \property string text
 * \property readonly pressed
 *
 * \signal clicked()
 * \signal doubleClicked()
 * \signal pressAndHold()
 *
 * \qml
 *   Button {
 *     option: "info"
 *     faIcon: "fa-github"
 *     size: "large"
 *     text: "Github"
 *   }
 */
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
    implicitWidth: (2 + bs["padding-%1-horizontal".arg(btn.size)] * 2 + textRow.width)*dp
    implicitHeight: (2 + bs["padding-%1-vertical".arg(btn.size)] * 2 + textRow.height)*dp

    Rectangle {
        id: btnRect
        anchors.fill: parent
        color: mouse.containsMouse ? Qt.darker(bs["btn-%1-bg".arg(btn.option)], 1.1)
                                   : bs["btn-%1-bg".arg(btn.option)]

        opacity: btn.enabled ? 1 : 0.65
        border {
            color: mouse.containsMouse ? Qt.darker(bs["btn-%1-border".arg(btn.option)], 1.1)
                                       : bs["btn-%1-border".arg(btn.option)]
            width: 1*dp
        }
        radius: btn.round ? bs["border-radius-%1".arg(btn.size)] : 0

        Rectangle {
            id: rectShadow
            anchors.centerIn: parent
            width: parent.width - parent.border.width * 2
            height: parent.height - parent.border.width * 2
            radius: parent.radius
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
                color: bs["btn-%1-color".arg(btn.option)]
            }
            Text {
                id: btnText
                text: btn.text
                font.pixelSize: bs["font-size-%1".arg(btn.size)]*dp
                font.bold: btn.boldFont
                color: bs["btn-%1-color".arg(btn.option)]
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
