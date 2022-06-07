#pragma once

#include <functional>
#include <memory>
#include <string>
#include <vector>

#include "Forward.hpp"
#include "HandlerContext.hpp"
#include "websocket/Types.hpp"

namespace eventhub {

namespace websocket {

class Handler final {
public:
  static void HandleRequest(HandlerContext&& ctx, websocket::ParserStatus parserStatus, websocket::FrameType frameType, const std::string& data);

private:
  Handler() {}
  ~Handler() {}

  static void _handleTextFrame(HandlerContext& ctx, const std::string& data);
};

} // namespace websocket
} // namespace eventhub


