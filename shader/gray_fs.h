
varying vec4 v_fragmentColor;
varying vec2 v_texCoord;
uniform sampler2D u_texture;
uniform sampler2D u_texture_color;

void main()
{
    vec4 v_orColor = v_fragmentColor * texture2D(u_texture, v_texCoord);
    float gray = dot(v_orColor.rgb, vec3(0.299, 0.587, 0.114));
    gl_FragColor = vec4(gray, gray, gray, v_orColor.a);
}				
