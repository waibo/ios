//
//  Shader.fsh
//  OpenGLGame
//
//  Created by Suen David on 12-5-3.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
