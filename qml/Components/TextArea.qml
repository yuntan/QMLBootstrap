import QtQuick 2.2

/* TextArea - Bootstrap style text input area form
 * \property string size
 *           Specify bootstrap size name.
 *           (large, base, small)
 *           note: height is settled by this property.
 * \property int row
 *           number of rows
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
 *   TextArea {
 *     width: parent.width
 *     size: "large"
 *     row: 3
 *     placeHolderText: "Input name"
 *   }
 * \endqml
 */
Item {
    id: textArea

    property string size: "base"
    property int row: 3
    property string placeHolderText: ""
    property bool round: true
    property bool boldFont: false

    // property alias
    property alias text: textEdit.text
    property alias readOnly: textEdit.readOnly
    property alias _textEdit: textEdit

    height: implicitHeight
    implicitHeight: ((areaRect.border.width + bs["padding-%1-vertical".arg(textArea.size)]) * 2
                     + placeHolder.implicitHeight * row)*dp

    Rectangle {
        id: areaRect
        anchors.fill: parent
        radius: textArea.round ? bs["input-border-radius"]*dp : 0
        color: enabled ? bs["input-bg"] : bs["input-bg-disabled"]
        border.width: 1*dp
        border.color: textEdit.focus ? bs["input-border-focus"]
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
            anchors {
                top: parent.top; topMargin: parent.border.width + bs["padding-%1-vertical".arg(textArea.size)]*dp
                horizontalCenter: parent.horizontalCenter
            }
            width: parent.width - (parent.border.width + bs["padding-%1-horizontal".arg(textArea.size)]*dp) * 2
            height: implicitHeight
            color: bs["input-color-placeholder"]
            text: textEdit.text === "" ? placeHolderText : ""
            font.pixelSize: bs["font-size-%1".arg(textArea.size)]*dp
            font.bold: textArea.boldFont
        }

        Flickable {
            id: flick
            clip: true
            anchors.centerIn: parent
            width: parent.width - (parent.border.width + bs["padding-%1-horizontal".arg(textArea.size)]*dp) * 2
            height: parent.height - (parent.border.width + bs["padding-%1-vertical".arg(textArea.size)]*dp) * 2
            contentWidth: width; contentHeight: textEdit.height
            flickableDirection: Flickable.VerticalFlick

            function ensureVisible(r) {
                if (contentY >= r.y) { contentY = r.y }
                else if (contentY+height <= r.y+r.height) { contentY = r.y+r.height-height }
            }

            TextEdit {
                id: textEdit
                clip: true
                anchors.centerIn: parent
                width: parent.width
                height: implicitHeight
                color: bs["input-color"]
                text: ""
                font.pixelSize: bs["font-size-%1".arg(textArea.size)]*dp
                font.bold: textArea.boldFont
                wrapMode: TextEdit.Wrap
                onCursorRectangleChanged: flick.ensureVisible(cursorRectangle)
                // TODO cursor
            }
        }

        // in order only to set mouse cursor to Ibeam
        MouseArea {
            anchors.fill: parent
            cursorShape: Qt.IBeamCursor
            acceptedButtons: Qt.NoButton
            // TODO focus on click
        }

        Behavior on border.color { ColorAnimation { duration: 200 } }
    }
}
