#include <concepts>
#include <string>
#include <type_traits>

// Предположим, что у типа T есть метод hash() и toString()
template<typename T>
concept HasHash = requires(T a) {
    { a.hash() } -> std::convertible_to<long>;
};

template<typename T>
concept HasToString = requires(T a) {
    { a.toString() } -> std::same_as<std::string>;
};

// Проверка отсутствия виртуального деструктора
template<typename T>
concept NoVirtualDestructor = !std::has_virtual_destructor_v<T>;

// Итоговый концепт
template<typename T>
concept ComplexConcept = HasHash<T> && HasToString<T> && NoVirtualDestructor<T>;
