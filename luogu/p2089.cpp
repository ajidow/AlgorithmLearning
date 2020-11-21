#include <iostream>

using namespace std;

int i[10];

int main(int argc, char const *argv[])
{
	int a;
	int res = 0;
	
	cin >> a;

	for (i[0] = 1; i[0] <= 3; ++i[0])
	{
		for (i[1] = 1; i[1] <= 3; ++i[1])
		{
			for (i[2] = 1; i[2] <= 3; ++i[2])
			{
				for (i[3] = 1; i[3] <= 3; ++i[3])
				{
					for (i[4] = 1; i[4] <= 3; ++i[4])
					{
						for (i[5] = 1; i[5] <= 3; ++i[5])
						{
							for (i[6] = 1; i[6] <= 3; ++i[6])
							{
								for (i[7] = 1; i[7] <= 3; ++i[7])
								{
									for (i[8] = 1; i[8] <= 3; ++i[8])
									{
										for (i[9] = 1; i[9] <= 3; ++i[9])
										{
											if (i[0] + i[1] + i[2] + i[3] + i[4] + i[5] + i[6] + i[7] + i[8] + i[9] == a)
											{
												res++;
											}
										}
									}
								}
							}
						}
					}		
				}
			}
		}
	}
	cout << res << endl;

	for (i[0] = 1; i[0] <= 3; ++i[0])
	{
		for (i[1] = 1; i[1] <= 3; ++i[1])
		{
			for (i[2] = 1; i[2] <= 3; ++i[2])
			{
				for (i[3] = 1; i[3] <= 3; ++i[3])
				{
					for (i[4] = 1; i[4] <= 3; ++i[4])
					{
						for (i[5] = 1; i[5] <= 3; ++i[5])
						{
							for (i[6] = 1; i[6] <= 3; ++i[6])
							{
								for (i[7] = 1; i[7] <= 3; ++i[7])
								{
									for (i[8] = 1; i[8] <= 3; ++i[8])
									{
										for (i[9] = 1; i[9] <= 3; ++i[9])
										{
											if (i[0] + i[1] + i[2] + i[3] + i[4] + i[5] + i[6] + i[7] + i[8] + i[9] == a)
											{
												for (int j = 0; j < 10; ++j)
												{
													cout << i[j] << " ";
												}
												cout << endl;
											}
										}
									}
								}
							}
						}
					}		
				}
			}
		}
	}


	return 0;
}