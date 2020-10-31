//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Hyunjun Jang
//  Copyright (c) 2020 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#include "../../../controller.h"

namespace api
{
	namespace v1
	{
		class AppsController : public Controller<AppsController>
		{
		public:
			void PrepareHandlers() override;

		protected:
			// GET /v1/vhosts/<vhost_name>/apps
			ApiResponse OnGetAppList(const std::shared_ptr<HttpClient> &client);

			// GET /v1/vhosts/<vhost_name>/apps/<app_name>
			ApiResponse OnGetApp(const std::shared_ptr<HttpClient> &client);
		};
	}  // namespace v1
}  // namespace api
