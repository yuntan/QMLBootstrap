import QtQuick 2.2
import "../../js/fontawesome.js" as JS

Item {
    property string faIcon
    implicitWidth: innertext.implicitWidth
    implicitHeight: innertext.implicitHeight

    Text {
        id: innertext
        text: JS.faIcons[faIcon] !== undefined ? JS.faIcons[faIcon]
                                               : JS.faIcons["fa-question"]
        font.family: "FontAwesome"
        font.pointSize: 64
    }
}
