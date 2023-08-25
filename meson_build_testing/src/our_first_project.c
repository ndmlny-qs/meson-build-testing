#include <Python.h>

static PyObject *zort(PyObject *self) { return PyUnicode_FromString("troz"); }

static PyMethodDef methods[] = {
    {"zort", (PyCFunction)zort, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL},
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT, "our_first_module", NULL, -1, methods,
};

PyMODINIT_FUNC PyInit__our_first_project(void) {
  return PyModule_Create(&module);
}
