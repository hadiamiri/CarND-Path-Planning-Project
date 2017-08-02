#pragma once

struct CarLocalizationData
{
	double x;
	double y;
	double s;
	double d;
	double yaw;
	double speed;

	CarLocalizationData(double x = 0, double y = 0, double s = 0, double d = 0, double yaw = 0, double speed = 0)
		: x(x), y(y), s(s), d(d), yaw(yaw), speed(speed) {}
};


struct SensorFusionData
{
	int id;
	double x;
	double y;
	double vx;
	double vy;
	double s;
	double d;
};


enum FiniteState
{
	fs_keep_lane
};
