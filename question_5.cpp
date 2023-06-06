/*
Given  n  2-dimensional  points  (x1,y1),(x2,y2),...,(xn,yn),  De-sign an algorithm that follows the ‘Divide-Conquer-Combine’ startegy to
(a)  arrange then−pointsin an increasing order of thexcoordi-nates
(b)  arrange then−pointsin an increasing order of theycoordi-nates
(c)  arrange then−pointsin decreasing order of the value (x−coordinate+y−coordinate)/2) coordinates
*/
#include <iostream>
#include <vector>
using namespace std;
struct Point {
 float x;
 float y;
};
 vector < Point > merge_by_x(vector < Point > & left_half,
 vector < Point > & right_half) {
 vector < Point > merged;
 int i = 0;
 int j = 0;
 while (i < left_half.size() && j < right_half.size()) {
 if (left_half[i].x <= right_half[j].x) {
 merged.push_back(left_half[i]);
 i++;
 } 
 else {
 merged.push_back(right_half[j]);
 j++;
 }
 }
 while (i < left_half.size()) {
 merged.push_back(left_half[i]);
 i++;
 }
 while (j < right_half.size()) {
 merged.push_back(right_half[j]);
 j++;
 }
 return merged;
}
 vector < Point > merge_sort_by_x(vector < Point > & points) {
 if (points.size() <= 1) {
 return points;
 }
 int mid = points.size() / 2;
 vector < Point > left_half(points.begin(), points.begin() + mid);
 vector < Point > right_half(points.begin() + mid, points.end());
 left_half = merge_sort_by_x(left_half);
 right_half = merge_sort_by_x(right_half);
 return merge_by_x(left_half, right_half);
}
void print_points(const std::vector < Point > & points) {
 for (const Point & point: points) {
 cout << "(" << point.x << ", " << point.y << ") ";
 }
 cout << std::endl;
}
int main() {
 vector < Point > points = {{3,2},{1,4},{5,1},{2,3}};
 cout << "Original Points: ";
 print_points(points);
 vector < Point > sorted_points = merge_sort_by_x(points);
 cout << "Points Sorted by x-coordinate: ";
 print_points(sorted_points);
 return 0;
}
