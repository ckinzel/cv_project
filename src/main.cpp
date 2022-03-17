//==========================================================================
// Title: Generation of 3D Shapes Using 2D Curve Fitting
//
// Engineer: Charles Kinzel
// Engineer: Rebecca McCullough
// Language: C++
//
// Class: CEG-7550
// Instructor: Dr. Bourbakis
// Due Date: May, 05 2022
//
//--------------------------------------------------------------------------
//
// Description:	This program uses PCL for point cloud processing. It will 
//				provide a custom extension for calculating local reference
//				frames (LRF).
//
// Input:		Point cloud data
//
// Output:		LRF
//==========================================================================

#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_types.h>
#include <pcl/search/kdtree.h>
#include <pcl/features/normal_3d_omp.h>
#include <pcl/surface/marching_cubes_rbf.h>

#include "FileReader.hpp"
using namespace pcl;
using namespace std;

int main(int argc, char** argv)
{

    std::string mPly = "C:/Users/charl/Desktop/dev/data/Glock/GLock/glock21-.45_1.ply";
    std::string mBunnyPath = "C:/Users/charl/Desktop/dev/data/Bunny/Bunny/";/*
    std::string mGlockPath = "C:/Users/charl/Desktop/dev/data/Glock/GLock/";
    PointCloud<PointXYZ>::Ptr cloud(new PointCloud<PointXYZ>);
    std::cout << "Start Debug?" << std::endl;
    std::cin.ignore();

    if (io::loadPLYFile<PointXYZ>(mPly, *cloud) == -1) {
        cout << "ERROR: couldn't find file" << endl;
        return (1);
    }
    else {
        cout << "loaded" << endl;
    }*/

    auto foo = lrf::FileReader();

    auto ret = foo.LoadPly(mPly);
    cout << "!!!: " << ret << endl;
    if(getchar() == '\n')
        return 0;
}