//
//  Layer_Battlelog.h
//  MonsterVillage
//
//  Created by Ko seung su on 2015. 4. 17..
//
//

attribute vec4 a_position;
attribute vec2 a_texCoord;
attribute vec4 a_color;

varying vec4 v_fragmentColor;
varying vec2 v_texCoord;

void main()
{
    gl_Position = CC_MVPMatrix * a_position;
    v_fragmentColor = a_color;
    v_texCoord = a_texCoord;
}