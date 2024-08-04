(module
  (func $add (param $0 i32) (param $1 i32) (result i32)
    (return (i32.add (get_local $0) (get_local $1)))
  )
  (export "add" (func $add))
)
