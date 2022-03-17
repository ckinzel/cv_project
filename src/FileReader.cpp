#include "FileReader.hpp"

lrf::FileReader::FileReader() {
	mCloud = std::make_shared<pcl::PointCloud<pcl::PointXYZ>>();
	//mCloud(new pcl::PointCloud<pcl::PointXYZ>);
}

int lrf::FileReader::LoadPly(std::string aFileName) {
	pcl::io::loadPLYFile<pcl::PointXYZ>(aFileName, *mCloud);
	return 0;
}