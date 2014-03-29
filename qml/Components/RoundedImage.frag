varying highp vec2 qt_TexCoord0;
uniform sampler2D _image;
uniform lowp float qt_Opacity;
uniform highp float _rX;
uniform highp float _rY;

// square float
highp float sq(float a)
{
    return a * a;
}

void main() {
    lowp float opacity = qt_Opacity;
    highp float x = qt_TexCoord0.x;
    highp float y = qt_TexCoord0.y;

    if(x <= _rX && y <= _rY
            && sq(x - _rX) / sq(_rX) + sq(y - _rY) / sq(_rY) > 1.0)
        opacity = 0.0;
    if(x <= _rX && y >= 1.0 - _rY
            && sq(x - _rX) / sq(_rX) + sq(y - 1.0 + _rY) / sq(_rY) > 1.0)
        opacity = 0.0;
    if(x >= 1.0 - _rX && y <= _rY
            && sq(x - 1.0 + _rX) / sq(_rX) + sq(y - _rY) / sq(_rY) > 1.0)
        opacity = 0.0;
    if(x >= 1.0 - _rX && y >= 1.0 - _rY
            && sq(x - 1.0 + _rX) / sq(_rX) + sq(y - 1.0 + _rY) / sq(_rY) > 1.0)
        opacity = 0.0;

    gl_FragColor = texture2D(_image, vec2(x, y)) * opacity;
}
