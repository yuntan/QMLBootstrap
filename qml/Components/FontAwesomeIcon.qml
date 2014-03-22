import QtQuick 2.2
import QMLBootstrap 1.0

Item {
    id: faItem
    property string faIcon : ""
    property alias color : innertext.color
    property string size
    property int fontPointSize: BS.fontSize["base"]
    property alias boldFont: innertext.font.bold
    implicitWidth: innertext.implicitWidth
    implicitHeight: innertext.implicitHeight

    Text {
        id: innertext
        text: faIcon !== "" ? BS.faIcons[faIcon] !== undefined ? BS.faIcons[faIcon]
                                                               : BS.faIcons["fa-question"]
                            : ""
        font.family: "FontAwesome"
        font.pointSize: size !== undefined ? (BS.fontSize[size] - 4)*dp
                                           : fontPointSize
    }
}
