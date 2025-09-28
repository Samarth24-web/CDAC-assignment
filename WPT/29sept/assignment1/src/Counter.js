import React, { useEffect, useState } from 'react'

const Counter = () => {

    const [count, setCount] = useState(0);
    const [table, setTable] = useState([]);

    useEffect(() => {
        let t = [];
        if (count > 0) {
            for (let i = 1; i <= 10; i++) {
                t.push((count) * i)
            }
            setTable(t)
        }
    }, [count,])

    return (
        <>
            <h1>counter : {count}</h1>
            <button onClick={() => setCount(count + 1)}>Increment</button>
            <button onClick={() => setCount(c => c === 0 ? c : c - 1)}>Decrement</button>
            <br />
            {
                count != 0 &&
                (
                    table.map((val, i) => {
                        return <h1 key={i}>
                            {
                                "\t" + val
                            }
                        </h1>
                    })
                )
            }
        </>
    )
}

export default Counter