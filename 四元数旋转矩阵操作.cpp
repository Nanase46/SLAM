//已知相机的位姿用四元数表示为q=[0.35,0.2,0.3,0.1],顺序为x,y,z,w，请编程实现：

//输出四元数对应的旋转矩阵、旋转矩阵的转置，旋转矩阵的逆矩阵，旋转矩阵乘以自身的转置，验证旋转矩阵的正交性。
#include <iostream>
#include <Eigen/Core>
#include <Eigen/Geometry>

using namespace std;

int main(int argc,char** argv){
	Eigen::Quaterniond quat(0.1,0.35,0.2,0.3);
	quat.normalized();

	Eigen::Matrix3d r;
	r = quat.matrix();
	cout<<"旋转矩阵 r = :"<<endl<<r<<endl;

	cout<<"旋转矩阵转置 rt = :\n"<<r.transpose()<<endl;

	cout<<"旋转矩阵逆矩阵 r-1 = :\n"<<r.inverse()<<endl;
	Eigen::Matrix3d rt = r.transpose()
	cout<<"旋转矩阵乘自身转置 r*rt = :\n"<<r*rt<<endl;

	return 0;
}