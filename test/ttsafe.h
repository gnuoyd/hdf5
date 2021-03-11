/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * Copyright by the Board of Trustees of the University of Illinois.         *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://support.hdfgroup.org/ftp/HDF5/releases.  *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*
 * This header file contains information required for testing the HDF5 library.
 */

#ifndef TTSAFE_H
#define TTSAFE_H

/*
 * Include required headers.  This file tests internal library functions,
 * so we include the private headers here.
 */
#include "testhdf5.h"

/* Prototypes for the support routines */
extern char *gen_name(int);

/* Prototypes for the test routines */
void tts_is_threadsafe(void);
#ifdef H5_HAVE_THREADSAFE
#ifdef H5_USE_RECURSIVE_WRITER_LOCKS
void tts_rec_rw_lock_smoke_check_1(void);
void tts_rec_rw_lock_smoke_check_2(void);
void tts_rec_rw_lock_smoke_check_3(void);
void tts_rec_rw_lock_smoke_check_4(void);
#endif /* H5_USE_RECURSIVE_WRITER_LOCKS */
void tts_dcreate(void);
void tts_error(void);
void tts_cancel(void);
void tts_acreate(void);
void tts_attr_vlen(void);

/* Prototypes for the cleanup routines */
#ifdef H5_USE_RECURSIVE_WRITER_LOCKS
void cleanup_rec_rw_lock_smoke_check_1(void);
void cleanup_rec_rw_lock_smoke_check_2(void);
void cleanup_rec_rw_lock_smoke_check_3(void);
void cleanup_rec_rw_lock_smoke_check_4(void);
#endif /* H5_USE_RECURSIVE_WRITER_LOCKS */
void cleanup_dcreate(void);
void cleanup_error(void);
void cleanup_cancel(void);
void cleanup_acreate(void);
void cleanup_attr_vlen(void);

#endif /* H5_HAVE_THREADSAFE */
#endif /* TTSAFE_H */
