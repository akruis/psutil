/*
 * Copyright (c) 2009, Jay Loden, Giampaolo Rodola'. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include <Python.h>

typedef struct kinfo_proc kinfo_proc;

int psutil_kinfo_proc(const pid_t pid, struct kinfo_proc *proc);
char *psutil_get_cmd_args(long pid, size_t *argsize);
char *psutil_get_cmd_path(long pid, size_t *pathsize);
int psutil_get_proc_list(struct kinfo_proc **procList, size_t *procCount);
int psutil_pid_exists(long pid);

//
PyObject* psutil_get_cmdline(long pid);
PyObject* psutil_proc_exe(PyObject* self, PyObject* args);
PyObject* psutil_proc_num_threads(PyObject* self, PyObject* args);
PyObject* psutil_proc_threads(PyObject* self, PyObject* args);
PyObject* psutil_cpu_count_phys(PyObject* self, PyObject* args);
PyObject* psutil_virtual_mem(PyObject* self, PyObject* args);
PyObject* psutil_swap_mem(PyObject* self, PyObject* args);