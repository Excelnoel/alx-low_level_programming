#include "Python.h"

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int my_div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        PyErr_SetString(PyExc_ZeroDivisionError, "division by zero");
        return 0;
    }
}

int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        PyErr_SetString(PyExc_ZeroDivisionError, "modulo by zero");
        return 0;
    }
}

static PyObject *wrap_add(PyObject *Py_UNUSED(self), PyObject *args) {
    int a, b, result;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    result = add(a, b);
    return PyLong_FromLong(result);
}

static PyObject *wrap_sub(PyObject *Py_UNUSED(self), PyObject *args) {
    int a, b, result;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    result = sub(a, b);
    return PyLong_FromLong(result);
}

static PyObject *wrap_mul(PyObject *Py_UNUSED(self), PyObject *args) {
    int a, b, result;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    result = mul(a, b);
    return PyLong_FromLong(result);
}

static PyObject *wrap_div(PyObject *Py_UNUSED(self), PyObject *args) {
    int a, b, result;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    result = my_div(a, b);
    return PyLong_FromLong(result);
}

static PyObject *wrap_mod(PyObject *Py_UNUSED(self), PyObject *args) {
    int a, b, result;
    if (!PyArg_ParseTuple(args, "ii", &a, &b)) {
        return NULL;
    }
    result = mod(a, b);
    return PyLong_FromLong(result);
}

static PyMethodDef operations_methods[] = {
    {"add", wrap_add, METH_VARARGS, "Add two integers"},
    {"sub", wrap_sub, METH_VARARGS, "Subtract two integers"},
    {"mul", wrap_mul, METH_VARARGS, "Multiply two integers"},
    {"div", wrap_div, METH_VARARGS, "Divide two integers"},
    {"mod", wrap_mod, METH_VARARGS, "Calculate the modulo of two integers"},
    {NULL, NULL, 0, NULL} /* Sentinel */
};

static struct PyModuleDef operations_module = {
    PyModuleDef_HEAD_INIT,
    "operations",
    NULL,
    -1,
    operations_methods,
    NULL, // Initialize m_slots to NULL
    NULL,
    NULL,
    NULL
};

PyMODINIT_FUNC PyInit_operations(void) {
    return PyModule_Create(&operations_module);
}
