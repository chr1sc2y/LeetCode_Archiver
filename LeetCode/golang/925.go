func isLongPressedName(name string, typed string) bool {
	name_size, typed_size := len(name), len(typed)
	i, j := 0, 0
	for i < name_size && j < typed_size {
		if name[i] == typed[j] {
			i++
			j++
		} else {
			j++
		}
	}
	if i == name_size { 
		return true
	}
	return false
}
