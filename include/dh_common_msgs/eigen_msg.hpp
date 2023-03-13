#include <Eigen/Core>

#include <dh_common_msgs/LinearVelocity.h>

namespace tf
{
void linVelMsgToEigen(const dh_common_msgs::LinearVelocity& m, Eigen::Vector3d& e)
{
  e.x() = m.vx;
  e.y() = m.vy;
  e.z() = m.vz;
}

void linVelEigenToMsg(const Eigen::Vector3d& e, dh_common_msgs::LinearVelocity& m)
{
  m.vx = e.x();
  m.vy = e.y();
  m.vz = e.z();
}
}  // namespace tf
