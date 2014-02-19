// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#ifndef MOAISPINE_H
#define MOAISPINE_H

#include <spine/spine.h>

//================================================================//
// MOAISpine
//================================================================//
/**	@name	MOAISpine
	@text	Spine default texture and file loading functions can be 
			overrided from Lua using this class. 

*/
class MOAISpine :
	public MOAIGlobalClass < MOAISpine, MOAILuaObject > {
private:
	
	MOAILuaRef mReadFileRef;
	MOAILuaRef mCreateTextureRef;
	
	//----------------------------------------------------------------//
	static int		_setCreateTexture	( lua_State* L );
	static int		_setReadFile		( lua_State* L );
	
public:
	
	DECL_LUA_SINGLETON ( MOAISpine )
		
	GET ( MOAILuaRef&, ReadFileRef, mReadFileRef )
	GET ( MOAILuaRef&, CreateTextureRef, mCreateTextureRef )
	

	//----------------------------------------------------------------//
					MOAISpine			();
					~MOAISpine			();
	void			RegisterLuaClass	( MOAILuaState& state );
};

#endif
