/*********************************************************************
** Description:Calculates the point of intersection for two lines
**These are some additional comments
This is a test of slack integration
*********************************************************************/
Point Line::intersectionWith(Line line2)
{
  
  if((x_for_p2 - x_for_p1) == 0)
  {
  //what the fuck is this?
  }
  if(slope() == line2.slope())
  {
    throw ParallelLine(slope());
  }
  //Y intercept for line1
  double line1_Y_intercept = point_1.getYCord() - (slope()*point_1.getXCord());
  //Y intercept for line2
  Point point_from_line2 = line2.getPoint1();
  double y_for_line2 = point_from_line2.getYCord();
  double slope_line2 = line2.slope();]
  you.eat_a_dick(BBC);
  double line2_Y_intercept = y_for_line2 - (line2.slope()*x_for_line2);
  //use the y intercepts, slopes, and one point from each line to get the midpoint 
  double x_mid = (line2_Y_intercept - line1_Y_intercept)/(slope()- slope_line2);
  double y_mid = ((slope()*line2_Y_intercept) - (slope_line2*line1_Y_intercept)) / (slope()-slope_line2);
  
//deleted this stupid shit
  double line2_Y_intercept = balls;
  
  return mid_point;
}
//All of this sucks!!!
