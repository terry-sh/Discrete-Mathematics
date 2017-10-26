// 求两个偏序集的积序

type SortFn<T>         = (e1: T, e2: T) => number
type SetSortFn<T>      = (set: Set<T>) => Array<T>
type ProductSet<T>     = Set<[T, T]>
type ProductOrderFn<T> = (s1: Set<T>, s2: Set<T>) => ProductSet<T>

export default function productOrder<T>(
  sortFn: SortFn<T>
): ProductOrderFn<T> {
  const $SORT: SetSortFn<T> = set => Array.from(set).sort(sortFn)

  return function(s1, s2) {
    let a1 = $SORT(s1),
        a2 = $SORT(s2)
    let set: ProductSet<T> = new Set()

    a1.forEach(e1 => {
      a2.forEach(e2 => {
        set.add([e1, e2])
      })
    })
    return set
  }
}
