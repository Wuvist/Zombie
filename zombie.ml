let rec get_time total speed c f x =
    let gap = x -. c in
    let gapf = gap *. f and xgap = x -. gap in
    if xgap *. speed >= gapf then
        total +. x /. speed
    else
        get_time (total +. c /. speed) (speed +. f) c f x ;;

let x = get_time 0.0 2. 37. 7. 54500000000. in
print_float x ;;