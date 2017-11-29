#pragma once

#include "Application.h"
#include "Renderer2D.h"
#include"Snake.h"
#include<Vector2.h>
#include<Vector3.h>
#include<Vector4.h>
#include<Matrix3.h>
#include<Matrix4.h>
#include<Matrixs2.h>
#include<iostream>
#include<math.h>

class Application2D : public aie::Application {
public:
	
	Application2D();
	virtual ~Application2D();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Texture*		m_texture;
	aie::Texture*		m_shipTexture;
	aie::Font*			m_font;
	Snake *mSnake;
	float m_cameraX, m_cameraY;
	float m_timer;
};
