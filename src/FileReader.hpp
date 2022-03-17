#pragma once
#include "pcl/io/ply_io.h"
#include <pcl/impl/point_types.hpp>

namespace lrf {
	class FileReader {
	public:
		FileReader();
	
		int LoadPly(std::string aFileName);
		

	private:
		pcl::PointCloud<pcl::PointXYZ>::Ptr mCloud;
		std::string mPly = "glock21-.45_1.ply";
		std::string mBunnyPath = "C:/Users/charl/Desktop/dev/data/Bunny/Bunny/";
		std::string mGlockPath = "C:/Users/charl/Desktop/dev/data/Glock/GLock/";
	};
} //lrf
