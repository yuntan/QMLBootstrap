import QtQuick 2.2

/* Input - Bootstrap style oneline text input form
 * \property string size
 *           Specify bootstrap size name.
 *           (large, base, small)
 *           note: height is settled by this property.
 * \property bool boldFont
 * \property bool enabled
 *           When it is false, form becomes uneditable
 *           and be slightly different look.
 * \property bool round
 *           Whether form should have rounded corner.
 * \property string text
 * \property string placeHolderText
 * \property bool readOnly
 *
 * \qml
 *   Input {
 *     width: parent.width
 *     size: "large"
 *     placeHolderText: "Input name"
 *   }
 * \endqml
 */
Item {
    id: input

    // TODO implement type
    property string type: "text"
    property string size: "base"
    property string placeHolderText: ""
    property bool round: true
    property bool boldFont: false
    // TODO implement
    readonly property string validationStates: "success"

    // property alias
    property alias text: textInput.text
    property alias readOnly: textInput.readOnly
    property alias _textInput: textInput

    // signal
    signal accepted()

    height: implicitHeight
    implicitWidth: ((inputRect.border.width + bs["padding-%1-horizontal".arg(input.size)]) * 2 + textInput.height)*dp
    implicitHeight: ((inputRect.border.width + bs["padding-%1-vertical".arg(input.size)]) * 2 + textInput.height)*dp

    Rectangle {
        id: inputRect
        anchors.fill: parent
        radius: input.round ? bs["input-border-radius"]*dp : 0
        color: enabled ? bs["input-bg"] : bs["input-bg-disabled"]
        border.width: 1*dp
        border.color: textInput.focus ? bs["input-border-focus"]
                                      : bs["input-border"]

        Rectangle {
            id: rectShadow
            anchors {
                top: parent.top; topMargin: parent.border.width
                horizontalCenter: parent.horizontalCenter
            }
            width: parent.width - parent.border.width * 2
            height: 3*dp
            radius: parent.radius
            visible: true
            gradient: Gradient {
                GradientStop { position: 0.0; color: Qt.rgba(0, 0, 0, 0.25) }
                GradientStop { position: 1.0; color: "transparent" }
            }
        }

        Text {
            id: placeHolder
            clip: true
            anchors.centerIn: parent
            width: parent.width - (parent.border.width + bs["padding-%1-horizontal".arg(input.size)]*dp) * 2
            height: implicitHeight
            color: bs["input-color-placeholder"]
            text: textInput.text === "" ? placeHolderText : ""
            font.pixelSize: bs["font-size-%1".arg(input.size)]*dp
            font.bold: input.boldFont
        }

        // TODO flickable
        TextInput {
            id: textInput
            clip: true
            anchors.centerIn: parent
            width: parent.width - (parent.border.width + bs["padding-%1-horizontal".arg(input.size)]*dp) * 2
            height: implicitHeight
            color: bs["input-color"]
            text: ""
            font.pixelSize: bs["font-size-%1".arg(input.size)]*dp
            font.bold: input.boldFont
            onAccepted: input.accepted()
            // TODO cursor
        }

        // in order only to set mouse cursor to Ibeam
        MouseArea {
            anchors.fill: parent
            cursorShape: Qt.IBeamCursor
            acceptedButtons: Qt.NoButton
        }

        Behavior on border.color { ColorAnimation { duration: 200 } }
    }
}
