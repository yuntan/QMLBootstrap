import QtQuick 2.2
import QMLBootstrap 1.0

Item {
    property string faIcon
    implicitWidth: innertext.implicitWidth
    implicitHeight: innertext.implicitHeight

    Text {
        id: innertext
        text: BS.faIcons[faIcon] !== undefined ? BS.faIcons[faIcon]
                                               : BS.faIcons["fa-question"]
        font.family: "FontAwesome"
        font.pointSize: 64
    }
}
