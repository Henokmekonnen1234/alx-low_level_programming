from xml.etree.ElementPath import find


def is_palindrome(num) -> bool:
    return str(num) == str(num)[::-1]


def find_largest_palindrome() -> int:
    max_pal = 0
    for i in range(0, 1000):
        for j in range(0, 1000):
            max_pal = i * j if is_palindrome(i * j) else max_pal
    return max_pal


if __name__ == "__main__":
    print(find_largest_palindrome())
