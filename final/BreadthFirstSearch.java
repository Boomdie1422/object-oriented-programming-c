import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.HashSet;

public class BreadthFirstSearch implements GraphSearchAlgorithm {

    public Path search(State start, State goal) {
        BreadthFirstSearch(start);
        List<Integer> path = new ArrayList<>();
        for (Integer at = end; at != null; at = prev[at]) path.add(at);
        Collections.reverse(path);
        if (path.get(0) == start) return path;
        path.clear();
        return State; 
    }

}
