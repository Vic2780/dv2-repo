
varying vec4 v_fragmentColor;
varying vec2 v_texCoord;
uniform sampler2D u_texture;
uniform sampler2D u_texture_color;

void main()
{
    vec4 v_orColor = v_fragmentColor * texture2D(u_texture, v_texCoord);
    float r = 11.0 / 255.0;
    float g = 121.0 / 255.0;
    float b = 3.0 / 255.0;
    
    float gray = dot(v_orColor.rgb, vec3( r, g, b ));
//    gl_FragColor = vec4(gray, gray, gray, v_orColor.a);
    gl_FragColor = vec4( 0, gray, 0, v_orColor.a );

}
