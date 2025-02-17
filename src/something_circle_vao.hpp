#ifndef SOMETHING_CIRCLE_VAO_HPP_
#define SOMETHING_CIRCLE_VAO_HPP_

#include "./something_rgba.hpp"

struct Circle_VAO {
    static const size_t CAPACITY = 1024;

    enum Attrib: GLuint {
        ATTRIB_CENTER = 0,
        ATTRIB_RADIUS,
        ATTRIB_COLOR,
        COUNT_ATTRIBS,
    };

    GLuint vao_id;
    GLuint vbo_ids[COUNT_ATTRIBS];
    GLuint vbo_element_size[COUNT_ATTRIBS];
    void *vbo_datas[COUNT_ATTRIBS];
    GLint attrib_size[COUNT_ATTRIBS];

    V2<GLfloat> centers[CAPACITY];
    GLfloat radii[CAPACITY];
    RGBA colors[CAPACITY];
    size_t count;

    void init();
    void use();
    void fill_circle(V2<GLfloat> center, GLfloat radius, RGBA color);
    void sync_buffers();
    void draw();
    void clear();
};

#endif // SOMETHING_CIRCLE_VAO_HPP_
