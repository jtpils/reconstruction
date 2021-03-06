#pragma once

class Program final : public core::Module, public core::SIMD {
protected:
	MainWindow wnd;
	Storage* lpData;
	Controller* controller;
public:
	int onLoad() override;
	int onDispose() override;

	int onStart() override;
	int onStop() override;
	int main() override;
};
