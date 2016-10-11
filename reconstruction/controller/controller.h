#pragma once

class Controller final : public core::EventListener, public core::Getter<Controller> {
private:
	core::Window* parent;
	Storage* lpData;
	bool valid;

	core::glView view;
	core::matrixf rotation;
	core::matrixf translation;
	uint loc[2];

public:
	Controller(core::Window& wnd, Storage& data);
	~Controller();

	inline void invalidate() { valid = 0; }
	inline Storage& storage() { return *lpData; };
	Controller& drawScene();

	int onResize(const core::eventInfo& e) override;
	int onMouseMove(const core::eventInfo& e) override;
	int onLButtonDown(const core::eventInfo& e) override;
	int onLButtonUp(const core::eventInfo& e) override;
	Controller& updateViewMatrix();
	Controller& initGL();
};
