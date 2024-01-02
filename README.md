# Triangles On Circumcircle
The Circumcircle Triangle Generator is an algorithm written with C Plus Plus. The function calculates triangle vertices on a circumcircle and gives the generated triangle points as output. An input of function controls the number of triangles, and so on...

### Input:

The program prompts the user for three pieces of input:

1. **Circumcenter Coordinates (x y):**
   - The user is expected to input the x and y coordinates of the circumcenter, separated by a space.

2. **Circumradius:**
   - The user provides the circumradius, which is the radius of the circumcircle.

3. **Number of Triangles:**
   - The user specifies the desired number of triangles to be generated on the circumcircle.

#### Sample Input:
```plaintext
Enter circumcenter coordinates (x y): 2 2
Enter circumradius: 3.5
Enter the number of triangles: 2
```

### Output:

After receiving user input, the program generates an array of triangles on the circumcircle using the provided circumcenter coordinates, circumradius, and the number of triangles. The output includes:

1. **Generated Triangles:**
   - The program calculates the coordinates of each vertex of the triangles and prints them to the console. Each triangle is represented as three points, and the coordinates of these points are displayed in the format `(x, y)`.

Certainly! Here's a sample interaction with the program, including input and output:

#### Sample Output:
```plaintext
triangles:
(-0.5, 5.5) (2, 5.5) (4.5, 5.5)
(2, -1.5) (4.5, -1.5) (6.99998, -1.5)
```

### Note:

- The output provides clear information about the coordinates of each vertex for all generated triangles.
- The output format allows easy interpretation of the geometric representation of the triangles on the circumcircle.

Users can visualize and further analyze the generated triangles based on this output.

### License:
This project is licensed under the [MIT License](LICENSE).
