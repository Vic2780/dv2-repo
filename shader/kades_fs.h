//
//  Layer_Battlelog.h
//  MonsterVillage
//
//  Created by Ko seung su on 2015. 4. 17..
//
//

varying vec4 v_fragmentColor;
varying vec2 v_texCoord;
uniform sampler2D u_texture;
uniform sampler2D u_texture_color;

void main()
{
    vec4 v_orColor = v_fragmentColor * texture2D(u_texture, v_texCoord);

    float r = v_orColor.r * 0.75;
    float g = v_orColor.g * 0.50;
    float b = v_orColor.b * 0.95;

    gl_FragColor = vec4(r, g, b, v_orColor.a);
}