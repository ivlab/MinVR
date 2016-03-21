/*
 * Copyright Regents of the University of Minnesota, 2016.  This software is released under the following license: http://opensource.org/licenses/
 * Source code originally developed at the University of Minnesota Interactive Visualization Lab (http://ivlab.cs.umn.edu).
 *
 * Code author(s):
 * 		Dan Orban (dtorban)
 */

#ifndef VRVIEWPORTNODE_H_
#define VRVIEWPORTNODE_H_

#include "display/nodes/graphics/VRGraphicsWindowChild.h"
#include "math/VRRect.h"

namespace MinVR {

class VRViewportNode : public VRGraphicsWindowChildNode {
public:
	VRViewportNode(const VRRect& rect);
	virtual ~VRViewportNode();

	void render(VRRenderer& renderer);

	static VRRect calculate(std::string inName, std::string outName, VRRenderState& state, const VRRect& rect, bool modifyTile = false);
	static VRRect calculate(std::string inName, VRRenderState& state, const VRRect& rect, bool modifyTile = false);

private:
	VRRect m_rect;
};

} /* namespace MinVR */

#endif /* VRVIEWPORTNODE_H_ */
