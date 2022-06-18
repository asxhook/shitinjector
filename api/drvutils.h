#pragma once

void start_driver()
{
	driver().handle_driver();

	if (!driver().is_loaded())
	{
		cout << xor_a("allah.sys driver downloaded") << endl;
		mmap_driver();
	}

	driver().handle_driver();
	driver().is_loaded() ? cout << xor_a("allah.sys initialized!") << endl : cout << xor_a("allah.sys initialize error =<") << endl;
}

