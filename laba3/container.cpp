#include "Container.h"

Container::Container()
{
	maxSize_ = 100;
	size_ = 0;
	arr_ = new Planet*[maxSize_];
}

void Container::add(Planet *tv)
{
	if (size_ == maxSize_)
	{
		Planet** temp = new Planet*[maxSize_];
		for (int i = 0; i < size_; i++)
			temp[i] = arr_[i];

		delete[] arr_;

		maxSize_ += SIZE;
		arr_ = new Planet*[maxSize_];
		for (int i = 0; i < size_; i++)
			arr_[i] = temp[i];

		delete[] temp;
	}
	arr_[size_++] = tv;
}



void Container::set(Planet **arr)
{
	arr_ = arr;
}

void Container::clear(int value)
{
	Planet** temp = new Planet*[size_];
	for (int i = 0; i < size_; i++)
		temp[i] = arr_[i];

	delete[] arr_;
	int k = 0;
	arr_ = new Planet*[--size_];
	for (int i = 0; i < size_; i++)
		if (i< value || i>value) {
			arr_[k] = temp[i];
			k++;
		}
		else if (i == value)
			continue;
	delete[] temp;
}

Planet *Container::get(int index)
{
	return arr_[index];
}