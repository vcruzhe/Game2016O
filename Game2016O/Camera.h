#pragma once
#include "Graphics\DXBasicPainter.h"

class CCamera
{
public:
	CCamera(CDXBasicPainter *pDXPainter);
	~CCamera();
	
	enum class ViewMode {
		Default, PlayerA, PlayerB, Top
	};
	const ViewMode m_cDefaultView = ViewMode::Default;
	ViewMode m_currentView;

	void ChangeView(ViewMode view);
	void setView(MATRIX4D &Projection, MATRIX4D &view, MATRIX4D &world);
	void ResetCamera();

	// Move Camera
	void RotateXAxe(float factor);
	void RotateYAxe(float factor);

	void MoveZAxe(float factor);
	void MoveXAxe(float factor);
private:
	CDXBasicPainter *m_pDXPainter;
	/*MATRIX4D Camera;
	VECTOR4D Pos, Dir;
	MATRIX4D Orientation;*/

	void ApplyChanges(MATRIX4D &cam);
};

