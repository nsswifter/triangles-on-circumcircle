/**
 Author: Mehdi Karami
 */

#include <iostream>
#include <cmath>

// Define a structure to represent a 2D point
struct Point {
    double x;
    double y;
};

// Define a struct for generating triangles on the circumcircle
struct CircumcircleTriangleGenerator {
    // Generates an array of triangles on the circumcircle given the circumcenter, circumradius, and number of triangles.
    static Point** generateTriangles(Point circumcenter, double circumradius, int numberOfTriangles) {
        // Calculate the total number of points needed for all triangles
        int numberOfPoints = numberOfTriangles * 3;

        // Allocate memory for the triangles
        Point** triangles = new Point*[numberOfTriangles];
        for (int i = 0; i < numberOfTriangles; ++i) {
            triangles[i] = new Point[3];
        }

        // Calculate the points on the circumcircle using polar coordinates
        for (int i = 0; i < numberOfPoints; ++i) {
            // Calculate the angle for each point on the circumcircle
            double angle = static_cast<double>(i) * (2 * M_PI) / static_cast<double>(numberOfPoints);
            
            // Calculate the x and y coordinates using polar coordinates
            double x = circumcenter.x + circumradius * cos(angle);
            double y = circumcenter.y + circumradius * sin(angle);
            
            // Create a Point structure for the current coordinates
            Point point = {x, y};
            
            // Assign the current point to the appropriate triangle in the array
            triangles[i / 3][i % 3] = point;
        }

        return triangles;
    }
};

int main() {
    // Prepare Inputs
    Point circumcenter = {100, 100};
    double circumradius = 80;
    int numberOfTriangles = 3;

    // Generate triangles
    Point** triangles = CircumcircleTriangleGenerator::generateTriangles(circumcenter, circumradius, numberOfTriangles);

    // Print the contents of the arrays
    std::cout << "triangles:" << '\n';

    // Access and print the triangles
    for (int i = 0; i < numberOfTriangles; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "(" << triangles[i][j].x << ", " << triangles[i][j].y << ") ";
        }
        std::cout << '\n';
    }

    // Deallocate memory
    for (int i = 0; i < numberOfTriangles; ++i) {
        delete[] triangles[i];
    }
    delete[] triangles;

    return 0;
}
