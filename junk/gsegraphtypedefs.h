#if defined(G_DISABLE_SINGLE_INCLUDES) && !defined (_LIB_G_GRAPH_H_INSIDE_) && !defined (_LIB_G_GRAPH_COMPILATION_)
#error "Only <libggraph.h> can be included directly."
#endif

/*
 * This header exist because there are circular dependencies:
 * .-> GGraph -> GGraphEdgeArray -> GGraphEdge -.
 * `--------------------------------------------'
 *
 * .-> GGraph -> GGraphArray -.
 * `--------------------------'
 *
 * So here typedefs to these structs exist. It should be enough, because none of
 * them needs information about sizes of other structs.
 */

#include <glib.h>

#ifndef _G_GRAPH_TYPEDEFS_H_
#define _G_GRAPH_TYPEDEFS_H_

G_BEGIN_DECLS

typedef GPtrArray GGraphEdgeArray;

typedef struct _GGraphEdge GGraphEdge;

typedef struct _GGraph GGraph;

typedef GPtrArray GGraphArray;

G_END_DECLS

#endif /* _G_GRAPH_TYPEDEFS_H_ */