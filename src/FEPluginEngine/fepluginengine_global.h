#ifndef FEPLUGINENGINE_GLOBAL_H
#define FEPLUGINENGINE_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef FEPLUGINENGINE_LIB
# define FEPLUGINENGINE_EXPORT Q_DECL_EXPORT
#else
# define FEPLUGINENGINE_EXPORT Q_DECL_IMPORT
#endif

#endif // FEPLUGINENGINE_GLOBAL_H