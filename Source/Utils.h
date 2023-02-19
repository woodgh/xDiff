#ifndef _UTILS_H_
#define _UTILS_H_

template< typename T >
class RangeIterator
{
public:
	RangeIterator(T Cur)
		: cur_(Cur)
	{
	}

	RangeIterator(T Begin, T End)
		: begin_(Begin)
		, end_(End)
	{
	}

	~RangeIterator(void) = default;

public:
	FORCEINLINE RangeIterator begin(void)
	{
		return { begin_ };
	}

	FORCEINLINE RangeIterator end(void)
	{
		return { end_ };
	}

public:
	FORCEINLINE RangeIterator& operator++()
	{
		++cur_;

		return *this;
	}

	FORCEINLINE bool operator!=(const RangeIterator& It) const
	{
		return cur_ != It.cur_;
	}

	FORCEINLINE T operator*() const
	{
		return cur_;
	}

private:
	T begin_ = 0;

	T end_ = 0;

	T cur_ = 0;
};

template< typename T >
class RangeIterator< T > Range(T End)
{
	return { 0, End };
}

template< typename T >
class RangeIterator< T > Range(T Begin, T End)
{
	return { Begin, End };
}

#endif//_UTILS_H_