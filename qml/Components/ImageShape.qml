import QtQuick 2.2

ShaderEffect {
    property alias source: interImage.source
    property real radius: 0
    property int contentX: 0
    property int contentY: 0
    property Image image: interImage

    property real _w: width / interImage.width
    property real _h: height / interImage.height
    property real _rX: radius / interImage.width / _w
    property real _rY: radius / interImage.height / _h
    property real _cX: contentX / interImage.width
    property real _cY: contentY / interImage.height

    fragmentShader: imageShapeFragShader

    Image {
        id: interImage
        visible: false
        width: sourceSize.width; height: sourceSize.height
    }
}
