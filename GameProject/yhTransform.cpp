#include "yhTransform.h"
#include "yhInput.h"
#include "yhTime.h"


namespace yh
{
	Transform::Transform()
		:Component(eComponentType::Transform)
		, mRotation(0.0f)
	{
	}

	Transform::~Transform()
	{
	}

	void Transform::Initialize()
	{
	}

	void Transform::Update()
	{

	}

	void Transform::Render(HDC hdc)
	{
	}
}


